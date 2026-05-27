function showRecommendation()
{
    let name =
        document.getElementById("name").value;

    let cuisine =
        document.getElementById("cuisine").value;

    let spice =
        document.getElementById("spice").value;

    let budget =
        document.getElementById("budget").value;

    let foodCards =
        document.getElementById("foodCards");

    let recommendations = [];

    if(cuisine === "Indian")
    {
        recommendations = [

            {
                name:"Biryani",
                image:"https://images.unsplash.com/photo-1701579231305-d84d8af9a3fd?q=80&w=1200&auto=format&fit=crop",
                rating:"4.8",
                price:"₹250",
                reason:"Perfect Indian spicy recommendation"
            },

            {
                name:"Butter Chicken",
                image:"https://images.unsplash.com/photo-1603894584373-5ac82b2ae398?q=80&w=1200&auto=format&fit=crop",
                rating:"4.7",
                price:"₹300",
                reason:"Highly rated Indian dish"
            }

        ];
    }

    else if(cuisine === "Chinese")
    {
        recommendations = [

            {
                name:"Noodles",
                image:"https://images.unsplash.com/photo-1612929633738-8fe44f7ec841?q=80&w=1200&auto=format&fit=crop",
                rating:"4.5",
                price:"₹180",
                reason:"Best Chinese recommendation"
            },

            {
                name:"Fried Rice",
                image:"https://images.unsplash.com/photo-1512058564366-18510be2db19?q=80&w=1200&auto=format&fit=crop",
                rating:"4.4",
                price:"₹200",
                reason:"Trending food item"
            }

        ];
    }

    else
    {
        recommendations = [

            {
                name:"Margherita Pizza",
                image:"https://images.unsplash.com/photo-1513104890138-7c749659a591?q=80&w=1200&auto=format&fit=crop",
                rating:"4.6",
                price:"₹350",
                reason:"Top Italian recommendation"
            },

            {
                name:"White Sauce Pasta",
                image:"https://images.unsplash.com/photo-1621996346565-e3dbc646d9a9?q=80&w=1200&auto=format&fit=crop",
                rating:"4.5",
                price:"₹320",
                reason:"Perfect for your taste"
            }

        ];
    }

    foodCards.innerHTML = "";

    recommendations.forEach(food => {

        foodCards.innerHTML += `

        <div class="food-card">

            <img src="${food.image}">

            <div class="food-content">

                <h3>
                    🍽 ${food.name}
                </h3>

                <p>
                    Recommended for
                    <strong>${name}</strong>
                </p>

                <div class="tags">

                    <span class="tag">
                        ${cuisine}
                    </span>

                    <span class="tag">
                        ${spice}
                    </span>

                    <span class="tag">
                        ⭐ ${food.rating}
                    </span>

                </div>

                <div class="price">
                    ${food.price}
                </div>

                <p style="margin-top:15px;">
                    ${food.reason}
                </p>

            </div>

        </div>

        `;
    });

    window.scrollTo({
        top:document.body.scrollHeight,
        behavior:"smooth"
    });
}